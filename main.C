#include "TFile.h"
#include "TGraphErrors.h"
#include "TF1.h"
#include "TH2I.h"
#include <TROOT.h>
#include <TPaveText.h>
#include <TCanvas.h>
#include <TRandom.h>
#include <TCandle.h>
#include <TLatex.h>
#include <TLegend.h>
#include <TApplication.h>



int main(int argc, char *argv[]){
  TApplication app("app", &argc, argv);
 
   double x[5]  = {1,2,3,4,5};
   double y1[5] = {1.0,2.0,1.0,2.5,3.0};
   double y2[5] = {1.1,2.1,1.1,2.6,3.1};
   double y3[5] = {1.2,2.2,1.2,2.7,3.2};
   double y4[5] = {1.3,2.3,1.3,2.8,3.3};
   double y5[5] = {1.4,2.4,1.4,2.9,3.4};
 
   TGraph *g1 = new TGraph(5,x,y1); g1->SetTitle("Graph with a red star");
 
   g1->SetLineWidth(3); 
   g1->SetMarkerColor(kRed);
 
   g1->Draw("CA* PLC PFC");
 
   gPad->BuildLegend();
  app.Run(true);


}