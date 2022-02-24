ext

def generate_ascii_art(text)

ascii_art = text.gsub("

", "

").gsub("\r", "

").gsub("\t", " ")

ascii_art.chars.each do |c|

if c == "

"

ascii_art = "

"

elsif c == "\r"

ascii_art = "

"

elsif c == "\t"

ascii_art = " "

else

ascii_art = ascii_art.chr

end

end

return ascii_art
