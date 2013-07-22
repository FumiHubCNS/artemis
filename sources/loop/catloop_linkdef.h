/* $Id:$ */
/**
 * @file   catloop_linkdef.h
 * @date   Created : Feb 19, 2012 11:19:06 JST
 *   Last Modified : Jul 22, 2013 08:56:20 JST
 * @author Shinsuke OTA <ota@cns.s.u-tokyo.ac.jp>
 *  
 *  
 *    Copyright (C)2012
 */
#ifndef CATLOOP_LINKDEF_H
#define CATLOOP_LINKDEF_H

#ifdef __CINT__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

// #pragma link C++ class TCatEventCollectionManager-!;
#pragma link C++ class TCatProcessor;
#pragma link C++ class TCatSleepProcessor;
#pragma link C++ class TCatEventCountProcessor;
#pragma link C++ class TCatCategorizingProcessor;
#pragma link C++ class TCatLoop;
#pragma link C++ class TCatLoopManager;
#pragma link C++ class TCatLoopWidget;
#pragma link C++ class TCatEventStore;
#pragma link C++ class TThreadPoolTaskImp<TCatLoop, EProc>;

#pragma link C++ class art::TLoop;
#pragma link C++ class art::TLoopManager;
#pragma link C++ class art::TConditionBit;
#pragma link C++ class art::TEventObject;
#pragma link C++ class art::TEventCollection;
#pragma link C++ class art::TProcessor;
#pragma link C++ class art::TTimerProcessor;
#pragma link C++ class art::TOutputTreeProcessor;
#pragma link C++ class art::TCounterEventStore;
#pragma link C++ class art::TRandomNumberEventStore;
#pragma link C++ class art::TRandomNumberProcessor;
#pragma link C++ class art::TTreeEventStore;
#pragma link C++ class art::TSimpleData;
#pragma link C++ class art::TRawDataObject;
#pragma link C++ class art::TSegmentedData;
#pragma link C++ class art::TCategorizedData;
#pragma link C++ class art::TMapTable;
#pragma link C++ class art::TFileDataSource-;
#pragma link C++ class art::TModuleDecoderFactory-;




#endif /* __CINT__ */

#endif // end of #ifdef CATLOOP_LINKDEF_H
