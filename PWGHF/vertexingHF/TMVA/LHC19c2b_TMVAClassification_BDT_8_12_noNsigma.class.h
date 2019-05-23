// Class: ReadBDT
// Automatically generated by MethodBase::MakeClass
//

/* configuration options =====================================================

#GEN -*-*-*-*-*-*-*-*-*-*-*- general info -*-*-*-*-*-*-*-*-*-*-*-

Method         : BDT::BDT
TMVA Release   : 4.2.1         [262657]
ROOT Release   : 6.16/00       [397312]
Creator        : zampolli
Date           : Tue May 21 15:09:49 2019
Host           : Linux pcalicecz2 4.4.0-142-generic #168-Ubuntu SMP Wed Jan 16 21:00:45 UTC 2019 x86_64 x86_64 x86_64 GNU/Linux
Dir            : /home/zampolli/LambdaC/ROOT6/Classification/SemiCentral
Training events: 134809
Analysis type  : [Classification]


#OPT -*-*-*-*-*-*-*-*-*-*-*-*- options -*-*-*-*-*-*-*-*-*-*-*-*-

# Set by User:
V: "False" [Verbose output (short form of "VerbosityLevel" below - overrides the latter one)]
H: "False" [Print method-specific help message]
NTrees: "850" [Number of trees in the forest]
MaxDepth: "3" [Max depth of the decision tree allowed]
MinNodeSize: "2.5%" [Minimum percentage of training events required in a leaf node (default: Classification: 5%, Regression: 0.2%)]
nCuts: "20" [Number of grid points in variable range used in finding optimal cut in node splitting]
BoostType: "AdaBoost" [Boosting type for the trees in the forest (note: AdaCost is still experimental)]
UseBaggedBoost: "True" [Use only a random subsample of all events for growing the trees in each boost iteration.]
AdaBoostBeta: "5.000000e-01" [Learning rate  for AdaBoost algorithm]
BaggedSampleFraction: "5.000000e-01" [Relative size of bagged event sample to original size of the data sample (used whenever bagging is used (i.e. UseBaggedBoost, Bagging,)]
SeparationType: "giniindex" [Separation criterion for node splitting]
# Default:
VerbosityLevel: "Default" [Verbosity level]
VarTransform: "None" [List of variable transformations performed before training, e.g., "D_Background,P_Signal,G,N_AllClasses" for: "Decorrelation, PCA-transformation, Gaussianisation, Normalisation, each for the given class of events ('AllClasses' denotes all events of all classes, if no class indication is given, 'All' is assumed)"]
CreateMVAPdfs: "False" [Create PDFs for classifier outputs (signal and background)]
IgnoreNegWeightsInTraining: "False" [Events with negative weights are ignored in the training (but are included for testing and performance evaluation)]
AdaBoostR2Loss: "quadratic" [Type of Loss function in AdaBoostR2]
Shrinkage: "1.000000e+00" [Learning rate for BoostType=Grad algorithm]
UseRandomisedTrees: "False" [Determine at each node splitting the cut variable only as the best out of a random subset of variables (like in RandomForests)]
UseNvars: "3" [Size of the subset of variables used with RandomisedTree option]
UsePoissonNvars: "True" [Interpret "UseNvars" not as fixed number but as mean of a Poisson distribution in each split with RandomisedTree option]
UseYesNoLeaf: "True" [Use Sig or Bkg categories, or the purity=S/(S+B) as classification of the leaf node -> Real-AdaBoost]
NegWeightTreatment: "inverseboostnegweights" [How to treat events with negative weights in the BDT training (particular the boosting) : IgnoreInTraining;  Boost With inverse boostweight; Pair events with negative and positive weights in training sample and *annihilate* them (experimental!)]
Css: "1.000000e+00" [AdaCost: cost of true signal selected signal]
Cts_sb: "1.000000e+00" [AdaCost: cost of true signal selected bkg]
Ctb_ss: "1.000000e+00" [AdaCost: cost of true bkg    selected signal]
Cbb: "1.000000e+00" [AdaCost: cost of true bkg    selected bkg ]
NodePurityLimit: "5.000000e-01" [In boosting/pruning, nodes with purity > NodePurityLimit are signal; background otherwise.]
RegressionLossFunctionBDTG: "huber" [Loss function for BDTG regression.]
HuberQuantile: "7.000000e-01" [In the Huber loss function this is the quantile that separates the core from the tails in the residuals distribution.]
DoBoostMonitor: "False" [Create control plot with ROC integral vs tree number]
UseFisherCuts: "False" [Use multivariate splits using the Fisher criterion]
MinLinCorrForFisher: "8.000000e-01" [The minimum linear correlation between two variables demanded for use in Fisher criterion in node splitting]
UseExclusiveVars: "False" [Variables already used in fisher criterion are not anymore analysed individually for node splitting]
DoPreselection: "False" [and and apply automatic pre-selection for 100% efficient signal (bkg) cuts prior to training]
SigToBkgFraction: "1.000000e+00" [Sig to Bkg ratio used in Training (similar to NodePurityLimit, which cannot be used in real adaboost]
PruneMethod: "nopruning" [Note: for BDTs use small trees (e.g.MaxDepth=3) and NoPruning:  Pruning: Method used for pruning (removal) of statistically insignificant branches ]
PruneStrength: "0.000000e+00" [Pruning strength]
PruningValFraction: "5.000000e-01" [Fraction of events to use for optimizing automatic pruning.]
SkipNormalization: "False" [Skip normalization at initialization, to keep expectation value of BDT output according to the fraction of events]
nEventsMin: "0" [deprecated: Use MinNodeSize (in % of training events) instead]
UseBaggedGrad: "False" [deprecated: Use *UseBaggedBoost* instead:  Use only a random subsample of all events for growing the trees in each iteration.]
GradBaggingFraction: "5.000000e-01" [deprecated: Use *BaggedSampleFraction* instead: Defines the fraction of events to be used in each iteration, e.g. when UseBaggedGrad=kTRUE. ]
UseNTrainEvents: "0" [deprecated: Use *BaggedSampleFraction* instead: Number of randomly picked training events used in randomised (and bagged) trees]
NNodesMax: "0" [deprecated: Use MaxDepth instead to limit the tree size]
##


#VAR -*-*-*-*-*-*-*-*-*-*-*-* variables *-*-*-*-*-*-*-*-*-*-*-*-

NVar 7
massK0S                       massK0S                       massK0S                       massK0S                                                         'F'    [0.487614005804,0.507613897324]
tImpParBach                   tImpParBach                   tImpParBach                   tImpParBach                                                     'F'    [-0.43784609437,0.494076609612]
tImpParV0                     tImpParV0                     tImpParV0                     tImpParV0                                                       'F'    [-1.49876773357,1.49993431568]
DecayLengthK0S*0.497/v0P      CtK0S                         CtK0S                         CtK0S                                                           'F'    [0.0878008902073,92.9755554199]
cosPAK0S                      cosPAK0S                      cosPAK0S                      cosPAK0S                                                        'F'    [0.990004718304,1]
CosThetaStar                  CosThetaStar                  CosThetaStar                  CosThetaStar                                                    'F'    [-0.99999922514,0.999999403954]
signd0                        signd0                        signd0                        signd0                                                          'F'    [7.35038838684e-08,0.494076609612]
NSpec 15
massLc2K0Sp                   massLc2K0Sp                   massLc2K0Sp                   mass Lc-->K0S+p               units                             'F'    [2.08646011353,2.48644137383]
LcPt                          LcPt                          LcPt                          Lc Pt                         units                             'F'    [8.00001144409,11.9999256134]
massLc2Lambdapi               massLc2Lambdapi               massLc2Lambdapi               mass Lc -->L(1520)+pi         units                             'F'    [1.25903999805,4.43968915939]
massLambda                    massLambda                    massLambda                    mass V0 = Lambda              units                             'F'    [1.12069046497,2.39478421211]
massLambdaBar                 massLambdaBar                 massLambdaBar                 mass V0 = LambdaBar           units                             'F'    [1.1206843853,2.41149306297]
cosPAK0S                      cosPAK0S                      cosPAK0S                      cosPointingAngle K0S          units                             'F'    [0.990004718304,1]
V0positivePt                  V0positivePt                  V0positivePt                  V0 positive Pt                units                             'F'    [0.120428606868,8.46209526062]
V0negativePt                  V0negativePt                  V0negativePt                  V0 negative Pt                units                             'F'    [0.121001668274,8.43100261688]
dcaV0pos                      dcaV0pos                      dcaV0pos                      dca V0 positive               units                             'F'    [0.100006967783,73.7532119751]
dcaV0neg                      dcaV0neg                      dcaV0neg                      dca V0 negative               units                             'F'    [0.100002877414,93.3257217407]
v0Pt                          v0Pt                          v0Pt                          K0S Pt                        units                             'F'    [0.500043094158,10.2432975769]
dcaV0                         dcaV0                         dcaV0                         dca V0                        units                             'F'    [3.97055615053e-08,0.399999022484]
V0positiveEta                 V0positiveEta                 V0positiveEta                 V0pos Eta                     units                             'F'    [-0.799975752831,0.799956262112]
bachelorEta                   bachelorEta                   bachelorEta                   eta bachelor                  units                             'F'    [-0.799995481968,0.79999101162]
centrality                    centrality                    centrality                    centrality                    units                             'F'    [30.0499992371,49.9500007629]


============================================================================ */

#include "LHC19c2b_TMVAClassification_BDT_8_12_noNsigma.class.h"

double ReadBDT_LHC19c2b_8_12_noNsigma::GetMvaValue__( const std::vector<double>& inputValues ) const
{
   double myMVA = 0;
   double norm  = 0;
   for (unsigned int itree=0; itree<fForest.size(); itree++){
      BDTNode *current = fForest[itree];
      while (current->GetNodeType() == 0) { //intermediate node
         if (current->GoesRight(inputValues)) current=(BDTNode*)current->GetRight();
         else current=(BDTNode*)current->GetLeft();
      }
      myMVA += fBoostWeights[itree] *  current->GetNodeType();
      norm  += fBoostWeights[itree];
   }
   return myMVA /= norm;
};

void ReadBDT_LHC19c2b_8_12_noNsigma::Initialize()
{
};

// Clean up
inline void ReadBDT_LHC19c2b_8_12_noNsigma::Clear() 
{
   for (unsigned int itree=0; itree<fForest.size(); itree++) { 
      delete fForest[itree]; 
   }
}
   inline double ReadBDT_LHC19c2b_8_12_noNsigma::GetMvaValue( const std::vector<double>& inputValues ) const
   {
      // classifier response value
      double retval = 0;

      // classifier response, sanity check first
      if (!IsStatusClean()) {
         std::cout << "Problem in class \"" << fClassName << "\": cannot return classifier response"
                   << " because status is dirty" << std::endl;
         retval = 0;
      }
      else {
            retval = GetMvaValue__( inputValues );
      }

      return retval;
   }

// Added by ALICE analyzer
extern "C"
{
  ReadBDT_LHC19c2b_8_12_noNsigma *ReadBDT_maker_LHC19c2b_8_12_noNsigma(std::vector<std::string> theInpVar)
  {
    return new ReadBDT_LHC19c2b_8_12_noNsigma(theInpVar);
  }
}