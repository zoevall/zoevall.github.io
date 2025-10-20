#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//θέτει τη μέγιστη τιμή που δέχεται για την ακολουθία
#define N_MUX 1000000000000000ULL  

//Δημιουργία συνάρτησης που υπολογίζει το άθροισμα των γνήσιων διαιρετών ενός αριθμού
uint64_t d_sum(uint64_t n) {
  // Για τους αριθμούς 0,1 υπάρχει μηδενικό πλήθος γνησίων διαιρετών οπότε σε κάθε περίπτωση επιστρέφει 0 !! 
  if ( n == o || n == 1 )
    return 0;

  //Ξεκινάμε με 1 διότι είναι γνήσιος διαιρέτης κάθε αριθμού μεγαλύτερου του (δηλ. ισχύει για κάθε αριθμό α>1)
uint64_t sum = 1;
for 
  if (n % i == 0) {
    sum += i;
  }
return sum;

}

int main(){
  uint64_t start;
  uint64_t max_lenght;
  char choice;

  // Ζητάει τον αριθμό εκκίνησης απο τον χρήστη
  printf("Please give the number to start the aliquot sequence from: ");
    if (scanf("%llu", &start) != 1 || start == 0) {
      //Αν υπάρξει μη έγκυρη εισαγωγή ή 0 τότε τερματίζεται με κωδικό 1
      fprintf(stderr, Invalid input. Exiting.\n");
      return 1;
    }

  // Ζητάει το μέγιστο μήκος της ακολουθίας (ή το 0 για άπειρο) απο τον χρήστη
  printf("Provide the max aliquot length to look for (0 for unlimited): ");
    if (scanf("%llu", %max_lenght) != 1) {
      //Αν δωθεί αριθμός εκτός των επιτρεπτών ορίων τερματίζεται αντίστοιχα
      fprintf(stderr, Invalid max length. Exiting.\n")
      return 1;
  }


    // Ζητάει την επιλογή το χρήστη
    printf("Do you want to print the full sequence ('f') or just the length ('l')? ");
        if (scanf( &choice) != 1 || (choice != 'f' && choice != 'l')) {
          fprintf(stderr, "Invalid choice. Exiting.\n");
          return 1;
        }




      

}
