# Task
#
# Your task is to print an array of the first N palindromic prime numbers.
# For example, the first 10 palindromic prime numbers are .
#
# Input Format
#
# A single line of input containing the integer N.
#
# Constraints
#
# You are not given how big N is.
#
# Output Format
#
# Print an array of the first N palindromic primes.
#
# Sample Input
#
# 5
# Sample Output
#
# [2, 3, 5, 7, 11]
pal_prime_array = lambda do |array_size|
  2.upto(Float::INFINITY).lazy.filter do |x|
    prime?(x) && palindrome?(x)
  end.first(array_size)
end

def prime?(number)
  if number > 2
    return (2..(Math.sqrt(number).floor + 1)).none? do |x|
      (number % x).zero?
    end
  end
  return false if number < 2
  return true if number == 2
end

def palindrome?(number)
  reversed_numnber = 0
  original_number = number
  while number != 0
    remainder = number % 10
    reversed_numnber = reversed_numnber * 10 + remainder
    number /= 10
  end
  original_number == reversed_numnber && true
end

inp = gets
print pal_prime_array.call(inp.to_i)
