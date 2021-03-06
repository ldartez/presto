#ifndef __bincand_cmd__
#define __bincand_cmd__
/*****
  command line parser interface -- generated by clig 
  (http://wsd.iitb.fhg.de/~geg/clighome/)

  The command line parser `clig':
  (C) 1995-2004 Harald Kirsch (clig@geggus.net)
*****/

typedef struct s_Cmdline {
  /***** -plo: The low pulsar period to check (s) */
  char ploP;
  double plo;
  int ploC;
  /***** -phi: The high pulsar period to check (s) */
  char phiP;
  double phi;
  int phiC;
  /***** -rlo: The low Fourier frequency bin to check */
  char rloP;
  double rlo;
  int rloC;
  /***** -rhi: The high Fourier frequency bin to check */
  char rhiP;
  double rhi;
  int rhiC;
  /***** -psr: Name of pulsar to check for (do not include J or B) */
  char psrnameP;
  char* psrname;
  int psrnameC;
  /***** -candnum: Number of the candidate to optimize from candfile. */
  char candnumP;
  int candnum;
  int candnumC;
  /***** -candfile: Name of the bincary candidate file. */
  char candfileP;
  char* candfile;
  int candfileC;
  /***** -usr: Describe your own binary candidate.  Must include all of the following (assumed) parameters */
  char usrP;
  /***** -pb: The orbital period (s) */
  char pbP;
  double pb;
  int pbC;
  /***** -x: The projected orbital semi-major axis (lt-sec) */
  char asinicP;
  double asinic;
  int asinicC;
  /***** -e: The orbital eccentricity */
  char eP;
  double e;
  int eC;
  /***** -To: The time of periastron passage (MJD) */
  char ToP;
  double To;
  int ToC;
  /***** -w: Longitude of periastron (deg) */
  char wP;
  double w;
  int wC;
  /***** -wdot: Rate of advance of periastron (deg/yr) */
  char wdotP;
  double wdot;
  int wdotC;
  /***** -mak: Determine optimization parameters from 'infile.mak' */
  char makefileP;
  /***** uninterpreted command line parameters */
  int argc;
  /*@null*/char **argv;
  /***** the whole command line concatenated */
  char *full_cmd_line;
} Cmdline;


extern char *Program;
extern void usage(void);
extern /*@shared*/Cmdline *parseCmdline(int argc, char **argv);

extern void showOptionValues(void);

#endif

