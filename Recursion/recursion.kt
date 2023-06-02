class Recursion {
    fun fact(fact: Int) {
        if (fact == 1) {
            println(fact)
            return
        }
        println(fact)
        fact(fact - 1)
    }

    companion object {
        @JvmStatic
        fun main(args: Array<String>) {
            val r = Recursion()
            r.fact(5)
        }
    }
}
