#include <iostream>
#include <string>

using namespace std;

enum PlayerStatus { PS_Running, PS_Walking, PS_Crouching };


/// Constantes inmovibles por declarar

const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

///Creación de funciones
void UpdateMovementSpeed2(PlayerStatus P_Status, float& speed);

/// Función principal
int main()
{

    int repeatOption;
    do {
        ///Variables locales
        float MovementSpeed;
        PlayerStatus status;

        ///Selección de opción con switch
        int option;
        cout << "Select an option: 0 for Running, 1 for Walking, 2 for Crouching: ";
        cin >> option;

        switch (option)
        {
        case 0:
            status = PS_Running;
            break;
        case 1:
            status = PS_Walking;
            break;
        case 2:
            status = PS_Crouching;
            break;
        default:
            cout << "Invalid option!" << endl;
            return 1; // Salir del programa debido a la opción inválida
        }

        UpdateMovementSpeed2(status, MovementSpeed);
        cout << "Movement Speed = " << MovementSpeed << endl;

        system("pause");
        system("cls");

        cout << "Do you want to repeat? (1 for yes, 0 for no): ";
        cin >> repeatOption;

        
        system("cls");

        if (repeatOption != 1)
        {
            cout << "Goodbye!" << endl;
        }

        
    } while (repeatOption == 1);
    return 0;
}

///Inicialización de funciones

void UpdateMovementSpeed2(PlayerStatus P_Status, float& speed)
{
    switch (P_Status)
    {
    case PS_Running:
        speed = RunSpeed;
        break;
    case PS_Walking:
        speed = WalkSpeed;
        break;
    case PS_Crouching:
        speed = CrouchSpeed;
        break;
    default:
        cout << "Invalid Choice!!!!" << endl;
    }
}
/*

void SwitchOnInt(int i, PlayerStatus& P_Status)
{
    switch (i)
    {
    case 0:
        cout << "Your number was zero" << endl;
        P_Status = PS_Running; // Cambiamos el enum según el valor de i
        break;
    case 1:
        cout << "Your number was One" << endl;
        P_Status = PS_Walking;
        break;
    case 2:
        cout << "Your number was Two" << endl;
        P_Status = PS_Crouching;
        break;
    default:
        cout << "Your number was not 0 or 1 or 2" << endl;
        break;
    }
}




void UpdateMovementSpeed(PlayerStatus P_Status,float& speed)
{

	if (P_Status == PS_Running) 
	{
		speed = RunSpeed;
			
	}
	else if (P_Status == PS_Walking) 
	{
	
		speed = WalkSpeed;

	}
	else if (P_Status == PS_Crouching) 
	{
	
		speed = CrouchSpeed;

	}

}
*/
