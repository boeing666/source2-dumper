#pragma once

class CMotionGraphGroup  // sizeof 0x108, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CMotionSearchDB m_searchDB; // offset 0x0, size 0xB8, align 8
    CUtlVector< CSmartPtr< CMotionGraph > > m_motionGraphs; // offset 0xB8, size 0x18, align 8
    CUtlVector< CMotionGraphConfig > m_motionGraphConfigs; // offset 0xD0, size 0x18, align 8
    CUtlVector< int32 > m_sampleToConfig; // offset 0xE8, size 0x18, align 8
    AnimScriptHandle m_hIsActiveScript; // offset 0x100, size 0x4, align 4
    char _pad_0104[0x4]; // offset 0x104
};
