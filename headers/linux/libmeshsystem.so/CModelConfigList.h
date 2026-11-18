#pragma once

class CModelConfigList  // sizeof 0x20, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    bool m_bHideMaterialGroupInTools; // offset 0x0, size 0x1, align 1
    bool m_bHideRenderColorInTools; // offset 0x1, size 0x1, align 1
    char _pad_0002[0x6]; // offset 0x2
    CUtlVector< CModelConfig* > m_Configs; // offset 0x8, size 0x18, align 8
};
