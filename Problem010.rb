def check(i)
	target = i

	for count in 2..Math.sqrt(i)
		if i % count == 0 then
			target = 0
			break
		end
	end
	target
end

sum = 2
i = 3

while i <= 2000000
	sum += check(i)
	i += 1
end

puts sum



