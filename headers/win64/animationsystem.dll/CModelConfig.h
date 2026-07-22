#pragma once

class CModelConfig  // sizeof 0x28, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_ConfigName; // offset 0x0, size 0x8, align 8
    CUtlVector< CModelConfigElement* > m_Elements; // offset 0x8, size 0x18, align 8
    bool m_bTopLevel; // offset 0x20, size 0x1, align 1
    bool m_bActiveInEditorByDefault; // offset 0x21, size 0x1, align 1
    char _pad_0022[0x6]; // offset 0x22
};
