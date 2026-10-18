#pragma once

class CAnimGraphDoc_Graph : public CAnimGraphDoc_SubGraph /*0x0*/  // sizeof 0x148, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xE0]; // offset 0x0
    CSmartPtr< CAnimGraphSettingsManager > m_pSettingsManager; // offset 0xE0, size 0x8, align 8
    char _pad_00E8[0x8]; // offset 0xE8
    CAnimGraphDoc_ClipDataManager m_clipDataManager; // offset 0xF0, size 0x30, align 8
    char _pad_0120[0x18]; // offset 0x120
    CUtlString m_modelName; // offset 0x138, size 0x8, align 8
    CUtlString m_previewModelName; // offset 0x140, size 0x8, align 8
};
