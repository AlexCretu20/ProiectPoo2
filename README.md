# **Cerinte proiect:**

## O interfață care definește funcțiile virtuale pure 
• O clasa abstractă (care implementeaza anumite metode ale interfeței, dar nu 
pe toate) 
• Variabila și funcție statică 
• Variabila constantă 
• 2-3 clase care moștenesc clasa abstracta, vector/listă/colecție de pointeri 
către bază 
• Utilizarea corectă a claselor polimorfice, de ilustrat în main() pe o colecție 
de obiecte de tip Baza cu dynamic_cast, să se apeleze toate metodele 
obiectului de tip derivată. 
• Resurse alocate dinamic în cel puțin una din clase + regula celor 5 
(cc/op=/destructor/constructor mutare/op= pentru mutare) 
• Destructor virtual pentru resursele alocate dinamic, obligatoriu cel puțin o 
clasă cu resurse alocate dinamic (și eliberate corespunzător). 
• Vector/List/Colectie de pointeri către Bază cu downcasting cu dynamic_cast 
• Operator de afișare definit în clasa abstractă care apelează o funcție virtuală 
de afișare, a obiectului derivat, precum în lab06. 
• Minim 2 funcții virtuale diferite de Destructor și Afisare() 
• Cel puțin o funcție virtuala care este suprascrisă doar în clasa abstractă și în 
niciuna din derivate 
• 1-2 funcții comune non-virtuale definite in clasa abstractă 
• Minim o clasă proprie pentru excepții, și folosirea mecanismului de excepții 
pe parcursul programului.

# **Descrierea proiectului:**
Am creat o clasa  numita Prajitura care este baza pentru clasele FructePraji si VeganPraji. 
Am implementat funcțiile virtule TimpPregatire și Pregatire. 
Functia TimpPregatire furnizează detalii despre timpul de pregatire și funcția Pregatire simulează procesul de pregătire al unei prajituri arătându-ne pașii pe care trebuie să îi urmăm.


## Construcția și distrugerea  obiectelor 
![image](https://github.com/AlexCretu20/ProiectPoo2/assets/153362409/a6681c6f-2302-49b5-a5cc-5066c9cd5f67)
![image](https://github.com/AlexCretu20/ProiectPoo2/assets/153362409/0842fba0-2d1d-49e2-8b14-b8cc1ca78cc8)


## Apelarea funcțiilor
![image](https://github.com/AlexCretu20/ProiectPoo2/assets/153362409/022a258d-6fe5-4ace-bbe7-ccf1ea31c1b7)

## Apelarea unui obiect din clasa FructePraji
![image](https://github.com/AlexCretu20/ProiectPoo2/assets/153362409/b78b2fd5-116c-4c89-bb1a-3e8eda28da04)









