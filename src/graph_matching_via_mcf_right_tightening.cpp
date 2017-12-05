
#include "graph_matching.h"
#include "visitors/standard_visitor.hxx"
using namespace LP_MP;
int main(int argc, char* argv[])

{
MpRoundingSolver<Solver<FMC_MCF_T<PairwiseConstruction::Right>,LP,StandardTighteningVisitor>> solver(argc,argv);
solver.ReadProblem(TorresaniEtAlInput::ParseProblemMCF<Solver<FMC_MCF_T<PairwiseConstruction::Right>,LP,StandardTighteningVisitor>>);
return solver.Solve();

}
