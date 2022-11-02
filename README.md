# SABER

SABER is a Mod-LWR based KEM finalist in the NIST Post-Quantum Cryptography Standardization Process.

# Additional Testing Instructions
* Select the desired algorithm in `SABER_params.h`. This can be done by commenting/uncommenting the appropriate line with `#define` in the code.  
* run `cd Reference_Implementation_KEM`
* Use `make additionalTesting` to compile the source codes 
* Use `./test/additionalEncapTesting` to generate KAT files
* Use `./test/additionalDecapTesting` to generate KAT files
* Use `./test/additionalRandTesting` to generate KAT files

# Interoperability
* Select the desired algorithm in `SABER_params.h`. This can be done by commenting/uncommenting the appropriate line with `#define` in the code.  
* Selcet java or csharp by changing code between the two e.g. find and replace java -> csharp
* run `cd Reference_Implementation_KEM`
* Use `make test/createKeyPairs` to compile the source codes 
* Use `make test/createEncaps` to compile the source codes 
* Use `make test/checkDecaps` to compile the source codes 
* Use `./test/createKeyPairs` to generate KAT files
* Use `./test/createEncaps` to generate KAT files
* Use `./test/checkDecaps` to check KAT files

## Folder structure

* `AVX_Implementation_KEM` : AVX2 optimized implementations of LightSaber, Saber, and FireSaber.
* `Cortex-M_Implementation_KEM` : Cortex-M optimized implementations of LightSaber, Saber, and FireSaber. Includes subdirectories `Cortex-M0` and `Cortex-M4`.
* `KAT` : Known Answer Tests for all possible conbinations of {uniform}-{Fire, Light}Saber-{90s}.
  * `PQCkemKAT*.req` : input for Known Answer Test
  * `PQCkemKAT*.rsp` : output for Known Answer Test
* `Reference_Implementation_KEM` : Reference implementations of LightSaber, Saber, and FireSaber.
* `Variants` : Implementations of Saber variants: uSaber, Saber-90s, and SaberX4

## Compilation instructions

* Select the desired algorithm in `SABER_params.h`. This can be done by commenting/uncommenting the appropriate line with `#define` in the code.   
* Use `make clean` to clean executable files
* Use `make all` to compile the source codes 
* Use `./test/test_kex` to run KEM operations in loop for `repeat` number of iterations
* Use `./test/PQCgenKAT_kem` to generate KAT files


