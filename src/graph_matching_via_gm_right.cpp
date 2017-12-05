
#include "graph_matching.h"
#include "visitors/standard_visitor.hxx"
using namespace LP_MP;
int main(int argc, char* argv[])

{
MpRoundingSolver<Solver<FMC_GM<PairwiseConstruction::Right>,LP,StandardTighteningVisitor>> solver(argc,argv);
solver.ReadProblem(TorresaniEtAlInput::ParseProblemGM<Solver<FMC_GM<PairwiseConstruction::Right>,LP,StandardTighteningVisitor>>);
return solver.Solve();

}
