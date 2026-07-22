#pragma once

class CMotionSearchNode  // sizeof 0x80, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CMotionSearchNode* > m_children; // offset 0x0, size 0x18, align 8
    CVectorQuantizer m_quantizer; // offset 0x18, size 0x20, align 8
    CUtlVector< CUtlVector< SampleCode > > m_sampleCodes; // offset 0x38, size 0x18, align 8
    CUtlVector< CUtlVector< int32 > > m_sampleIndices; // offset 0x50, size 0x18, align 8
    CUtlVector< int32 > m_selectableSamples; // offset 0x68, size 0x18, align 8
};
