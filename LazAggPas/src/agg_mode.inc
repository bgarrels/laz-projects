//
// AggPas 2.4 RM3 compiler options configuration file
//

{DEFINE AGG_DEBUG }

//----------------------------------------------------------------------------
{$IFDEF CPUPOWERPC }
 {$DEFINE AGG_CPU_PPC }

{$ENDIF }

{$IFDEF CPUI386 }
 {$DEFINE AGG_CPU_386 }

{$ENDIF }

{$IFDEF CPU386 }
 {$DEFINE AGG_CPU_386 }

{$ENDIF }

{$IFDEF FPC }
 {$MODE DELPHI }

{$ENDIF }

// OS

{$IFDEF WIN32 }
 {$DEFINE AGG_WINDOWS }

{$ENDIF }

{$IFDEF WINDOWS }
 {$DEFINE AGG_WINDOWS }

{$ENDIF }

{$IFDEF LINUX }
 {$DEFINE AGG_LINUX }

{$ENDIF }

{$IFDEF DARWIN }
 {$DEFINE AGG_MACOSX }

{$ENDIF }

//----------------------------------------------------------------------------
{$IFDEF AGG_DEBUG }
 {$DEFINE AGG_FULL_DEBUG }

{$ENDIF }

//----------------------------------------------------------------------------
{ SWITCHES CONFIGURATION }
{$IFNDEF FPC }
 {$A- }{ Fields alignment OFF }
 {$F+ }{ Far code generation }
{$ENDIF }

{$HINTS OFF }
{$WARNINGS OFF }

{$B- }{ Complete boolean evaluation }
{$V- }{ String type checking }
{$X+ }{ Extended syntax }

{$IFDEF AGG_FULL_DEBUG }
 {$R+ }{ Range checking }
 {$I+ }{ IO checking }
 {$Q+ }{ Overflow checking }

 {$IFNDEF FPC }
  {$O- }{ Code Optimization }
 {$ENDIF }

 {$D+ }{ Debug Info ON }
 {$Y+ }{ References Info ON }

{$ELSE }
 {$R- }{ Range checking }
 {$I- }{ IO checking }
 {$Q- }{ Overflow checking }

 { Code Optimization }
 {$IFNDEF FPC }
  {$IFDEF AGG_OPTIMIZE }
   {$O+ }
  {$ELSE }
   {$O- }
  {$ENDIF }
 {$ENDIF }

 {$D- }{ Debug Info OFF }
 {$Y- }{ References Info OFF }

{$ENDIF }


