#ifndef verificacao_h
#define verificacao_h
#include "cadastro.h"

//Fun�oes de Exibir Imoveis
void exibirLocal(Timovel);
void exibirCasa(Timovel);
void exibirAP(Timovel);
void exibirFlat(Timovel);
void exibirStudio(Timovel);
void exibir(Timovel);

//Fun�oes MAIN
void vendaImovel(Timovel);
void verificarQuantidade(Timovel[]);
void verificarVenda(Timovel[]);
void verificarAlugar(Timovel[]);
void verificarAlugarBairro(Timovel[]);
void verificarVendaBairro(Timovel[]);
void verificarCidade(Timovel[]);



#endif // verificacao_h
