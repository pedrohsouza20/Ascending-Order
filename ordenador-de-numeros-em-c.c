#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetorNumbers[] = {40, 90, 10, 12, 5, -230, 0, 900, -850, 300, 700, 110, 5};
    int vetorSize = sizeof(vetorNumbers) / sizeof(vetorNumbers[0]);
    int indexReceiver;

    for(int i = 0; i < vetorSize; i++){
        // faz um loop [i] em relacao aos outros index [j]
        for(int j = i; j < vetorSize; j++){
            //se i > j, indexReceiver recebe o valor e o guarda
            //o index menor[i] recebe o menor [j]
            //vetor [j] recebe o valor anteriormente guardado
            if(vetorNumbers[i] > vetorNumbers[j]){
                indexReceiver = vetorNumbers[i];
                vetorNumbers[i] = vetorNumbers[j];
                vetorNumbers[j] = indexReceiver;
            }
        }
    }

    for(int i = 0; i < vetorSize; i++){
        printf("%i\n", vetorNumbers[i]);
    }
}
