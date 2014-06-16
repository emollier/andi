/**
 * @file
 * @brief Functions and structures for DNA sequences
 *
 */
#ifndef _SEQUENCE_H_
#define _SEQUENCE_H_

/**
 * @brief A structure for sequences.
 *
 * This structure is used to represent a DNA sequence of some kind.
 */
typedef struct {
	/** This is the DNAs forward strand as a string. */
	char *S;
	/** This member contains first the reverse strand and then the
		forward strand. */
	char *RS;
	/** The length of the forward strand. */
	size_t len;
	/** Corresponds to strlen(RS) */
	size_t RSlen;
	/** A name for this sequence */
	char *name;
	/**
	 * @brief GC-Content
	 *
	 * The relative amount of G or C in the DNA.
	 */
	double gc;
} seq_t;

void freeSeq( seq_t *S);
void init_seq( seq_t *S);

typedef struct {
	seq_t *seqs;
	size_t size;
	size_t n;
} dyn_seq_arr;

void *ensure_dyn_seq_arr( dyn_seq_arr *dsa);

#endif

