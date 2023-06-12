// 2023_06_10_HistoriaNarrada
// Rodrigo Farías Andrés

#include <iostream>
#include <locale.h>

int main()
{
    int a = 0;

    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Bienvenido a mi historia. En este cuento interactivo podrás seguir distintos caminos dependiendo de tus respuestas.\nExisten dos finales legítimos y otros tantos finales falsos.\n\n¿Empezamos?\n1. Sí\n0. No\n";
    std::cin >> a;

    if (a == 1)
    {
        a = 0;
        std::cout << "\nHemos despertado en un valle.\nEs de noche y la luna ilumina el sendero delante de nosotros.\nParece haber un camino que guía a un pueblo, cualquier otra dirección está plagada de niebla...\n\n¿Qué haremos?\n1. Seguimos el camino\n0. Nos adentrarnos en la niebla\n";
        std::cin >> a;
        if (a == 1)
        {
            a = 0;
            std::cout << "Seguimos el camino.\nEscuchamos varios ruidos extraños y cosas moverse a través de la niebla pero no parecen querer pisar el camino.\nLlegamos al pueblo. Parece ser que solo quedan los vestigios de este asentamiento, casas destruidas y retomadas por la naturaleza adornan las calles.\nEscuchamos a alguien hablar en donde creemos es la plaza del pueblo.\n\n¿Qué haremos?\n1. Iremos a investigar\n0. Lo ignoramos y exploramos el pueblo\n";
            std::cin >> a;
            if (a == 1)
            {
                a = 0;
                std::cout << "Iremos a investigar.\nNos encontramos a un viejo recostado mientras balbucea con lo que parece ser una espada recargada a su lado. Nos acercamos al anciano y al vernos nos dice...\n";
                std::cout << "-¿¡Un forajido?! ¡Atrás, alimaña, o sufrirás las consecuencias de mi venerosa compañera!\nEl anciano agita su espada de lado a lado mientras sigue recostado y fuera de nuestro alcance...\n-Me temo que no soy ningún forajido, solo soy un espíritu perdido en busca de algo que me revele mis propósitos.";
                std::cout << "\nEl anciano deja de agitar su espada y contesta...\n-Oh, lamento mi agresión, joven. La inseguridad del pueblo ha crecido desde la aparición de aquella misteriosa niebla y uno tiene que cuidarse a sí mismo.\n-No se preocupe, ¿eh...?\n-¡Oh! Una disculpa, caballero Amnísia a su servicio.\n";
                std::cout << "-Gracias, caballero. ¿Cree que podría indicarme en dónde me encuentro?\n-Usted, mi educado joven, se encuentra en la que una vez fue la capital del reino. ¡Nuestra querida Gia Sena!";
                std::cout << "\n-¿Qué le ocurrió a tan bello pueblo?\n-La niebla ocurrió. Desde su llegada hace varios meses, extraños sucesos han ocurrido. Desaparecen familias, cosechas mueren, extraños artefactos y símbolos plagan los edificios.";
                std::cout << "\n-¿Por qué no huyeron del pueblo?\n-Los más desesperados se perdieron en la niebla, los más fuertes y orgullosos lucharon y perecieron contra ella, los más cobardes nos quedamos a esperar una ayuda que nunca llegó...";
                std::cout << "\n-Lamento mucho escuchar eso...\n-No tienes nada que lamentar, muchacho. Yo creo que tu enigmática y oportuna llegada está afiliada con el destino. Verás, hay un favor que necesito me hagas...";
                std::cout << "\n-¿Qué puedo ofrecerle, caballero?\n-Necesito que recuperes algo por mí. Mientras investigaba un ruido cerca de la iglesia del pueblo fui atacado y arrebatado de mi precioso amuleto por una criatura extraña. Apenas tuve fuerza para escapar a mi paradero actual...";
                std::cout << "\n-¿Quiere que vaya a arriesgar mi vida por su baratija? Usted me está mandando a mi muerte...\n-¡No es ninguna baratija! Además, quiero que te lleves a mi espada, para tu necesaria protección. Esto es algo que no puedo hacer por mí mismo, por favor ayúdeme.";
                std::cout << "\n\n¿Qué vamos a hacer?\n1. Tomaremos la espada\n0. Rechazaremos su petición\n";
                std::cin >> a;
                if (a == 1)
                {
                    a = 0;
                    std::cout << "Tomaremos la espada.\n-Regresaré lo más rápido que pueda con su amuleto, caballero Amnísia.\n-Te agradezco enormemente, joven. Tenga mucho cuidado.";
                    std::cout << "Nos dirigimos hacia la iglesia del pueblo con las direcciones del caballero. Llegamos ala entrada de la iglesia y un aire de peligro nos irrita todo el cuerpo. \n\n¿Qué vamos a hacer?\n1. Nos adentrarnos en la iglesia\n0. Huiremos del pueblo con la espada\n";
                    std::cin >> a;
                    if (a == 1)
                    {
                        a = 0;
                        std::cout << "Nos adentramos en la iglesia.\nAl fondo podemos ver un pequeño destello verde. A nuestra derecha inmediata hay unas escaleras que conducen al piso de arriba.\n\n¿Qué haremos?\n1. Ivestigaremos el brillo verde\n0. Seguiremos explorando la iglesia\n";
                        std::cin >> a;
                        if (a == 1)
                        {
                            a = 0;
                            std::cout << "\nInvestigaremos el brillo verde.\nAl acercarnos el brillo verde revela ser el ojo de la bestia que parecía estarnos esperando.\n\n¿Qué vamos a hacer?\n1. Atacaremos de frente\n0. Huiremos al piso de arriba.\n";
                            std::cin >> a;
                            if (a == 1)
                            {
                                a = 0;
                                std::cout << "Atacaremos de frente.\nNos lanzamos hacia la bestia y a pesar del poderoso filo de la espada no parece que ejerzamos ningún tipo de daño...\nLa bestia ataca de vuelta y sucumbimos ante el dolor...\nFINAL FALSO: Morir atacando.";
                            }
                            else
                            {
                                std::cout << "\nHuiremos al piso de arriba.\nDurante nuestra huida la bestia logra herirnos pero logramos encerrarnos en una habitación oscura. Dentro encontramos lo que parece ser el amuleto del caballero. Es un brazalete plateado con una gema azul incrustrada.\nFuertes golpes azotan la puerta que está a punto de ceder a ellos.\n\n¿Qué haremos?\n1. Nos colocaremos el brazalete\n0. Guardaremos el brazalete\n";
                                std::cin >> a;
                                if (a == 1)
                                {
                                    a = 0;
                                    std::cout << "Nos colocaremos el brazalete.\nAl hacerlo sentimos una fuerte energía y poder dominar nuestro cuerpo. La bestia termina de atravesar la puerta y se abalanza sobre nosotros. Casi de manera inconsciente le rebanamos la cabeza a la bestia de un solo tajo."
                                }
                            }
                        }
                    }
                }



            }
        }
        else
        {
            std::cout << "\nNos adentramos a la niebla.\nCriaturas nos rodean en la niebla intimidándonos con gruñidos. Somos atacados por la espalda por un tajo filoso a nuestro cuello. Caemos al suelo y cerramos los ojos.\n\nFINAL FALSO: Devorado por la niebla.\n.";
        }
    }
}


