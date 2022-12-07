#include "Agenda.hpp"

void Agenda::adicionaPessoaFisica(Pfisica aux) {
  if (controleF < numPf - 1) {
    pessoasf[controleF] = aux;
    controleF++;
    cout << "Pessoa adicionada a agenda com sucesso!" << endl;
  } else {
    cout << "Erro! numero de pessoas fisicas atingido!" << endl;
  }
};
void Agenda::adicionaPessoaJuridica(Pjuridica aux){
  if (controleJ < numPj - 1) {
    pessoasj[controleJ] = aux;
    controleJ++;
  } else {
    cout << "Erro! numero de pessoas juridicas atingido!" << endl;
  }
}



void Agenda::removePessoa(string nome){
  for(int i = 0; i < controleF;i++){
    if(nome == pessoasf[i].getNome()){
      if(i == controleF){
        pessoasf[i].setNome("");
        pessoasf[i].setEmail("");
        pessoasf[i].setEndereco("");
        pessoasf[i].setCPF("");
        pessoasf[i].setCivil("");
        pessoasf[i].setNasc("");
        numPf--;
      }else{
        for(int j = i; j < controleF;j++){
          pessoasf[j].setNome(pessoasf[j+1].getNome());
          pessoasf[j].setEmail(pessoasf[j+1].getEmail());
          pessoasf[j].setEndereco(pessoasf[j+1].getEndereco());
          pessoasf[j].setCPF(pessoasf[j+1].getCPF());
          pessoasf[j].setCivil(pessoasf[j+1].getCivil());
          pessoasf[j].setNasc(pessoasf[j+1].getNasc());
        }
      }
      controleF--;
    } 
  }
  
  for(int i = 0; i < controleJ;i++){
    if(nome == pessoasj[i].getNome()){
      if(i==controleJ){
        pessoasj[i].setNome("");
        pessoasj[i].setEmail("");
        pessoasj[i].setEndereco("");
        pessoasj[i].setCNPJ("");
        pessoasj[i].setInsc("");
        pessoasj[i].setRazao("");
      }else{
        for(int j = i; j < controleJ;j++){
          pessoasj[j].setNome(pessoasj[j+1].getNome());
          pessoasj[j].setEmail(pessoasj[j+1].getEmail());
          pessoasj[j].setEndereco(pessoasj[j+1].getEndereco());
          pessoasj[j].setCNPJ(pessoasj[j+1].getCNPJ());
          pessoasj[j].setInsc(pessoasj[j+1].getInsc());
          pessoasj[j].setRazao(pessoasj[j+1].getRazao());
        }
      }
      controleJ--;
    }  
  }
}



void Agenda::visualizarContatos(){
  cout<< "----------------------------------" <<endl;
  cout<<"\t\tLista de Contatos"<<endl<<endl;
  for(int i = 0; i < controleF;i++){
    cout << "CPF: " << pessoasf[i].getCPF() << endl ;
    cout << "Nome: " << pessoasf[i].getNome() << endl ;
    cout << "Endereço: " << pessoasf[i].getEndereco() << endl ;
    cout << "Email: " << pessoasf[i].getEmail()<< endl ;
    cout << "Data de Nascimento: " << pessoasf[i].getNasc() << endl ;
    cout << "Estado Civil: " << pessoasf[i].getCivil() << endl ;
    cout <<endl;
  }
  for(int i = 0; i < controleJ;i++){
    cout << "CNPJ: " << pessoasj[i].getCNPJ() << endl ;
    cout << "Nome: " << pessoasj[i].getNome() << endl ;
    cout << "Endereço: " << pessoasj[i].getEndereco() << endl ;
    cout << "Email: " << pessoasj[i].getEmail()<< endl ;
    cout << "Inscrição Estadual: " << pessoasj[i].getInsc() << endl ;
    cout << "Razão Social: " << pessoasj[i].getRazao() << endl ;
    cout <<endl;
  }
  cout<< "----------------------------------" <<endl;
}

void Agenda::pesquisar(string nome){
  int cont = 0;
  cout<< "----------------------------------" <<endl;
  cout<<"\t\tPesquisa"<<endl<<endl;

  for(int i = 0; i < controleF;i++){
    if(nome == pessoasf[i].getNome()){
      pessoasf[i].pesquisar(nome);
      cont++;
    }
  }
  for(int i = 0; i < controleJ;i++){
    if(nome == pessoasj[i].getNome()){
      pessoasj[i].pesquisar(nome);
      cont++;
    }  
  }
  if(cont==0){cout<<"Nenhuma pessoa encontrada com este nome!"<<endl;}
  
  cout<< "----------------------------------" <<endl;
}