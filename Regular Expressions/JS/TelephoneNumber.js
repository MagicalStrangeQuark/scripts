let TextTelephoneNumber = "Alguns números possíveis são: (51) 92343-8574, 91234-4653, (51)9285-77910, (85) 4209-4632";

/**
 * Expressão regular para obter números de telefone
 */
console.log(TextTelephoneNumber.match(/\(?(\d{2})?\)?\s?\d{4,5}-?\d{4}/gi));