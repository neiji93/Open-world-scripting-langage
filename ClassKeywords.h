


/*
In this langage, we highly recommand you to prevent using base classes
except in serious cases. Serious cases are the needs of already existing langages
and already well known theoric cases. It means that highly typed classes in other
langages must be highly typed in programs using this langage too.

In order to prevent base classes requirements, 
see memory_6.c 

[inject]
	void injectForPatch( );

*/


/* dont forget that this langage needs interoperability with another langage to run !
Then, here, we use c++ base concepts to do it as c++ can be used in every langages.
humm, it seems that it s not good, then we have to forbid some classes here to have 
interoperability ! As we can use log(x), we will permit only one class here to have interoperability
and it means that this class will have a huge number of functions and parameters !
If we dont do that, the interoperability will have 3 langage including this one !
*/


//Don t start with the most basic class type but you can do it later. I mean 
//trying to push the perfect second class type that eventually can be the first basic
//enhancement of one functionnalities of the base class

class SecondType : public BaseClassPreventer
{
	
	
}

//although this class can be used after the written lines with SecondType source code
//it can be used in SecondTypeClass too !   Let s find a way but int this langage requirements !
//At the moment, it is not done !
class SecondTypeFramework : public SecondTypePatcher
{
	
}


//In addition here, we can have a richer langage if we create a class that won't have to use 
//patching ! Let s find some cases here ! Because at the moment, I cannot see anything !4
//Ah ok !!!!! A fake patch ! This is good !
//The only way i think, to have fake injection, is to use this class in the last lines of  code
//of any program because last lines can be run rapidely and as injection is a more quick way
//to execute code than some others technologies !
class FakePatchClassSecondType : public LastLinesChecker
{

	//il semblerait que mon language soit plus fortement type objet que les pattern UML !!! YESS !
	//il semblerait qu il y ait aussi un autre avantage : forcer toutes les classes des programmes
	//a avoir le plus de donnees ou fonctions private !!!! Ca augmenterait la securite du language
	//si on pouvait forcer des choses public a devenir private ! Peut etre quon peut le faire
	//dynamiquement le fait de transformer des public en private....Le gros desavantage est quon 
	//supprimera la rapidite du language pour les dernieres lignes de code et que ce sera moins type
	//objet...Bah ca servirait danss le cas de code driver !!!!! YYESSSS ! Je viens tout juste de trouer
	//du code a faire et qui serait une chose comme la decouverte dss traits en c++ !!!! Peut etre !
	//Bah ca doit etre ca et je dis maintenant quon pourra utiliser peut etre tout le code du language c++
	//qui code les traits !!!! Je viens encore de trouver quelque chose : l utilisation du code trait du c++
	//permet ici d avoir des classes de base ! Merde, il faut eviter ca ! En plus, la, je parle du code driver !
	//Alors comment empecher d executer des traits du c++ dans mon language ??? Solution exacte : rajouter
	//des lignes dans les constructeurs du code de mon language et non dans le code des utilisateurs de mon
	//language ! L'utilisation d autres lignes de code dans les constructeurs internal de mon language
	//va forcer en meme temps l interdiction d utiliser des classes de bases !!!!! YESSSS !! C est exactement
	//ce quil fallait, donc ca va augmenter la securite de mon language !  MAIS ATTENTION ! La prevention
	//de l utilisation de classes de bases dans mon language ne doit pas etre codé dans cette classes et ce fichier !
	//Je vais donc mettre un pointeur forcement intelligent et null dans le constructeur en dessous qui utiliser
	//les template. Mais il faudra qu on ait des modeles alors.... Donc peut etre que ce constructeur ne pourrait
	//servir que dans le code de code full driver of last lines of the program ! Mais alors, comment
	//l initialiser ?? on va donc utiliser des isolate mais quand meme forcer le constructeur qui initialiser
	//a nullptr !
	public FakePatchClassSecondType(....)
	{
		if( .... )
			return new point_light doPatchDriverCommandsOfLastLines(...);
		else
			return new referential_physics doPatchDriverCommandsOfLastLines(....);
	}


	public FakePatchClassSecondType<typename T,....>(std::string driverCommands)
	{
		nullptr spt = ...->createNullPtrFromDriverCommandsFromStringLocalModel( driverCommands );
		if( .... )
			 new point_light DriverFromNullPTR( spt); //nullptr; //doPatchDriverCommandsOfLastLines(...);
		else
			 new referential_physics DriverFromNullPtr(spt); //nullptr; //doPatchDriverCommandsOfLastLines(....);

		//this line was already explained. It has the ability to permit initializing the local model 
		//later as a driver command. Then it means initalizing commands. So, we have to put in
		//a stack later. After that, let s create a temporary stack now. Now, it means that
		//we will have algorithms of stack manipulation in the futur work !
		StackAlgorithm::getInstance()->createAndFillandSetMemoryEMptyStackWithLocalModel( ..... );
		StackAlgorithm::getInstance()->preventThisInTheLastLines();
		
		//Pour creer des algos de stack, je vais encore utiliser log(x) a fond !
		//donc pour l'instant on aura une rracine necessaire qui ne contiendra donc jamais une classe
		//de base ! log(x) peutil etre utiliser dans un algorithme de parcours de noeuds ? On devrait
		//donc le prouver avec log(x). log(x) est une foonction qui permet d avoir l'infini et des 
		//petits nombre au debut.Les petits nombre au debut sont log(x) et les grands nombre tres tard
		//sont log( racine de x ). J ai ecrit des choses sur mon telephone et lune des dernieres phrases
		//etait : les classes ou objets seront mieux en terme de securite s ils sont place dans le milieu
		//de la pile. Maintenant, utilisons log(x) pour savoir comment depiler. On va prendre 
		//la correspondance entre la complexite n*log(n) et log(racine de x) qui est, pour ce derneir,
		//par intuition, l expression des grands nombres; Toujours avec log(x), on va essayer de ne regader
		//la fin de la pile, ce qui nous permettra, enfin, de dire qu'au minimum, on a un algorithme
		//d exploration d'une pile !!!!! OUFFF YEEESS !!! ENFIN !!!!
	}



private: //all those things after this line are private





	//last lines can be driver code. Then, there are 2 ways : 1/driver commandds
	//2/ C code injection for drivers.
	
	//here just put driver commands
	public void doPatchDriverCommandsOfLastLines( std::string driverCommands)
	{
		(driverLocalModelAlreadyValidatedSmartPointer)->getDriverStack()
				->putFirstTypeCommandWithoutBSPTreeRootForOptimization(driverCommands);
				
		//use internal patcher if we need optimization ! then, there must be another function of
		//this class that does not use optimization if we need it in our langage. Check it later nejdet !
		InternalPatcher::getInstance()->isolateAll(driverLocalModelAlreadyValidatedSmartPointer); //isolateAll is not optimized !
		
		
		//Je viens de trouver un nouvel avantage a mon language : la prevention d utilisation de 
		//technologies deja existante ! En y reflechissant bien, ca augmente la securite du language !
		//En plus le language produit du code plus rapide dans les dernieres lignes de codes ! YESS !
		//En dessous, on va utiliser une seule instruction pour empecher d utiliser des technologies
		//deja existantes d autres language ou d autres programmes ! Il faut que je trouve une raison
		//a ne utiliser une seule instruction !
		
		
	}
	
	//here C code injection. We need a patch technology and we need contracts !
	//As the rich part of this langage is not due to other langage rich functions or classes
	//we can use nowadays basic patching isolates like process isolate. Then, we dont need
	//too many lines of code here ! Ohh, then it is best here to prevent big lines contracts !!!!
	//So do it too !!!
	public void doRealFakePatchFromCCommands(std::string contractCode, isolate isolateForPatching, ......)
	{
		//although we will use  isolates later in this function, here in this line, we cannot prevent
		//checking isolate data to get more datas to send to profiler !
		LastLinesPRofiler::getInstance()->getContractSizeFromDatas(contractCode, functionNAme, isolateForPatching);
		
	}
}

