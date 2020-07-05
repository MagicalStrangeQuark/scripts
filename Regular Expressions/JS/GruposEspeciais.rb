StringtoMatch = 'supermercado superação hiperMERCADO'

#puts StringtoMatch.scan(/(?:super)[\wÂ-Û]+/i)

# POSITIVE LOOKBEHIND

#puts StringtoMatch.scan(/(?<=super)[\wÀ-ú]+/i)

# NEGATIVE LOOKBEHIND

puts StringtoMatch.scan(/(?<!super)mercado/i)