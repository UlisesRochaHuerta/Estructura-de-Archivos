package ejemplopracticaarchivos1;
import data.Processing;
import templates.Persona;
import java.util.ArrayList;

/**
 * @author Ulises
 */
public class Main {
 public static void main(String[] args) {

    ArrayList<Persona> personas = new ArrayList<>();
    ArrayList<Persona> outPersonas = new ArrayList<>();

        personas.add(new Persona(
                "Pedro Rodirguez",
                24,
                1.70,
                75,
                1
                ));
        personas.add(new Persona(
                "Juan Perez",
                44,
                1.60,
                80,
                2
        ));
        personas.add(new Persona(
                "Jose Jimenez",
                32,
                1.80,
                67,
                3
        ));

        Processing processing = new Processing();
//        processing.guardarPersonasEnArchivo(personas, "personas.txt");
        outPersonas = processing.leerPersonasDeArchivo("personas.txt");
        for (int i=0; i< outPersonas.size(); i++){
            System.out.println(
                    outPersonas.get(i).getNombre() + " | " +
                            outPersonas.get(i).getEdad() + " | " +
                            outPersonas.get(i).getEstatura() + " | " +
                            outPersonas.get(i).getPeso() + " | " +
                            outPersonas.get(i).getId()
            );
        }
    }
    }