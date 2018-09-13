install.packages('ggplot2')
library(ggplot2)
install.packages('reshape')
library(reshape)


#result <- read.csv(file.choose(), header = FALSE, sep= ";", encoding="UTF-8")
result <- read.csv("./../result.csv", header = FALSE, sep= ";", encoding="UTF-8")
result <- result[,-4]
result<-result[order(result$V3),]
#matrix<-as.matrix(cast(result, V1 ~ V2))
#heatmap(matrix)



result$V1 <- factor(result$V1, levels = rev(unique(result$V1)))
result$V2 <- factor(result$V2, levels = rev(unique(result$V2)))


ggplot(result, aes(x=fct_rev(V1), y=fct_rev(V2))) +
  geom_tile(aes(fill = V3), ,color = "white") +
  geom_text(aes(label = round(V3, 1))) +
  scale_fill_gradient2(low="navy", mid="white", high="red", midpoint=0, limits=range(result$V3)) +
  #scale_fill_distiller(palette = "Spectral") +
  #facet_grid(result$V1~result$V2,scales="free_y",space="free_y")+
  ylab("M1 ") +
  xlab("M2") +
  theme(legend.title = element_text(size = 10),
        legend.text = element_text(size = 12),
        plot.title = element_text(size=16),
        axis.title=element_text(size=14,face="bold"),
        axis.text.x = element_text(angle = 90, hjust = 1)) +
  labs(fill = "Number of difference")