squaresum = 0
sumsquare = 0
i = 0

for i in 1..100
	squaresum += i * i
	sumsquare += i
end

sumsquare = sumsquare * sumsquare

answer = sumsquare - squaresum

print "Answer="
puts answer
