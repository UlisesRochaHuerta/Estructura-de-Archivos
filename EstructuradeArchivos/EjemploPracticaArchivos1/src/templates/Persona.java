package templates;

/**
 * @author Ulises
 */
public class Persona {
    
    private String nombre;
    private int edad;
    private double estatura;
    private int peso;
    private long id;

    public Persona(String nombre, int edad, double estatura, int peso, long id){
        this.nombre = nombre;
        this.edad = edad;
        this.estatura = estatura;
        this.peso = peso;
        this.id = id;
    }

    


    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public int getEdad() {
        return edad;
    }
    public void setEdad(int edad) {
        this.edad = edad;
    }

    public double getEstatura() {
        return estatura;
    }
    public void setEstatura(float estatura) {
        this.estatura = estatura;
    }

    public int getPeso() {
        return peso;
    }
    public void setPeso(int peso) {
        this.peso = peso;
    }

    public long getId() {
        return id;
    }
    public void setId(long id) {
        this.id = id;
    }
    
    
}
