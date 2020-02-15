exdir = ${prefix}/share/TestU01/examples

noinst_PROGRAMS = bat1 bat2 bat3 birth1 ex1 ex3 ex4 ex7 fbirth fcoll scat2
# misses excel.pts
EXTRA_PROGRAMS = scat
LDADD = $(top_builddir)/testu01/libtestu01.la

ex3_SOURCES = ex3.c my16807.c my16807.h
ex7_SOURCES = ex7.c mrg32k3a.c xorshift.c

ex_DATA = bat1.res bat2.res birth1.res ex3.res excel.dat vax.bin my16807.h \
   bat1.c bat2.c bat3.c birth1.c birth2.c ex1.c ex3.c ex4.c ex7.c \
   fcoll.c fbirth.c scat.c scat2.c my16807.c mrg32k3a.c xorshift.c \
   fbirth.res1.tex fbirth.res2.tex fcoll.res1.tex fcoll.res2.tex      

TESTS = $(noinst_PROGRAMS)
CLEANFILES = bone.tex
