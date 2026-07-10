static String decode_huff(Node root, String s) {

    // Guardado de las letras que descifremos
    StringBuilder resultado = new StringBuilder();

    // Empezamos siempre situados en la raíz del árbol
    Node actual = root;

    // Recorremos la cadena bit por bit, de izquierda a derecha
    for (int i = 0; i < s.length(); i++) {

        char bit = s.charAt(i);

        // Si el bit es '0', bajamos al hijo izquierdo.
        // Si el bit es '1', bajamos al hijo derecho.
        if (bit == '0') {
            actual = actual.left;
        } else {
            actual = actual.right;
        }

        boolean esHoja = (actual.left == null && actual.right == null);

        if (esHoja) {
            resultado.append(actual.data);

            actual = root;
        }
    }

    return resultado.toString();
}