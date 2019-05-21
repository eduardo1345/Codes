#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct {
    int chave;
} item;

typedef struct NoArvoreAVL *PointeiroArvoreAVL;

typedef struct NoArvoreAVL {
    item elemento;
    PointeiroArvoreAVL direita;
    PointeiroArvoreAVL esquerda;
    int altura;
} NodeNoArvoreAVLTree;



void iniciaArvoreAVL(PointeiroArvoreAVL *node){
    (*node)=NULL;
}
bool estaVaziaArvoreAVL(PointeiroArvoreAVL *node){
    if((*node) == NULL){
        return true;

    }
}
void Pre_ordem(PointeiroArvoreAVL *node){
    if((*node) == NULL)return;
        printf("%d\n", ((*node)->elemento.chave));
        Pre_ordem(&(*node)->esquerda);
        Pre_ordem(&(*node)->direita);

}

void Pos_ordem(PointeiroArvoreAVL *node){
    if((*node) == NULL)return;
    Pos_ordem(&(*node)->esquerda);
    Pos_ordem(&(*node)->direita);
    printf("%d\n", (*node)->elemento.chave);
}

void Em_ordem(PointeiroArvoreAVL*node){
    if((*node) == NULL) return;
    Em_ordem(&(*node)->esquerda);
    printf("%d\n", (*node)->elemento.chave);
    Em_ordem(&(*node)->direita);
}
int alturaArvoreAVL(PointeiroArvoreAVL *node){
    if((*node) == NULL){
        return  0;
    }
    return (*node)->altura;
}
int atualizaAlturaArvoreAVL(PointeiroArvoreAVL esquerda, PointeiroArvoreAVL direita);
bool pesquisaArvoreAVL(PointeiroArvoreAVL *node, int elemento, item *porra){
        if((*node)== NULL){
            return false;
        }
        if((*node)->elemento.chave == elemento){
            *porra= (*node)->elemento;
            return true;
        }
        if((*node)->elemento.chave >elemento){
            return pesquisaArvoreAVL(&(*node)->esquerda, elemento, porra);
        }
        else{
            return pesquisaArvoreAVL(&(*node)->direita, elemento, porra);
    }
}
void destruirArvoreAVL(PointeiroArvoreAVL *node);

void aplicarRotacoes(PointeiroArvoreAVL *node);

void rotacaoSimplesEsquerda(PointeiroArvoreAVL *node){
    PointeiroArvoreAVL u;
    u=(*node)->direita;
    (*node)->direita=u->esquerda;
    u->esquerda=(*node);
}
void rotacaoSimplesDireita(PointeiroArvoreAVL *node){

}
void rotacaoDuplaEsquerda(PointeiroArvoreAVL *node){

}
void rotacaoDuplaDireita(PointeiroArvoreAVL *node){

}

bool inserirArvoreAVL(PointeiroArvoreAVL *node, item x){
    if((*node) == NULL){
        item no=malloc(sizeof(NodeNoArvoreAVLTree));
        (*node)->direita=NULL;
        (*node)->esquerda=NULL;
        (*node)->altura=0;
        no=x;
        return true;
    }
    bool ok;
    if((*node)->elemento(x) == (*node)->elemento.chave){
        return false;
    }
    if(x.chave > (*node)->elemento.chave){
        ok=inserirArvoreAVL((*node)->direita,x);
    }
    else{
        ok=inserirArvoreAVL((*node)->esquerda,x);
    }
    if(ok ==false)return false;

    if(ok == true){
        aplicarRotacoes((*node));
    }
}

void imprimeArvoreAVLNivel(PointeiroArvoreAVL *node);


int main(){

    return 0;
}