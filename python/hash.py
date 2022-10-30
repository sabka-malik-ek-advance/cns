# Hash a single string with hashlib.sha256
import hashlib
a_string = 'TEITBATCHFOUR'
hashed_string = hashlib.sha256(a_string.encode('utf-8')).hexdigest()
hashed_string2 = hashlib.sha384(a_string.encode('utf-8')).hexdigest()
hashed_string3 = hashlib.sha224(a_string.encode('utf-8')).hexdigest()
hashed_string4 = hashlib.sha512(a_string.encode('utf-8')).hexdigest()
hashed_string5 = hashlib.sha1(a_string.encode('utf-8')).hexdigest()
print("hashed string equivalent to SHA256:",hashed_string)
print("hashed string equivalent to SHA384:",hashed_string2)
print("hashed string equivalent to SHA224:",hashed_string3)
print("hashed string equivalent to SHA512:",hashed_string4)
print("hashed string equivalent to SHA1:",hashed_string5)
# Returns:
# 4e7d696bce894548dded72f6eeb04e8d625cc7f2afd08845824a4a8378b428d1