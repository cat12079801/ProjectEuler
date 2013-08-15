target = 600851475143
i = 1
answer = 0

while target !=1 do
	if target % i == 0 then
		target = target / i
		answer = i
	end
	i = i + 1
end

print "Answer="
puts answer
