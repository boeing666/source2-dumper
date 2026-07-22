#pragma once

class CAnimScriptComponent : public CAnimGraphDoc_Component /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    CUtlString m_sName; // offset 0x38, size 0x8, align 8 | MPropertyFriendlyName MPropertySortPriority
    CUtlString m_scriptFilename; // offset 0x40, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    char _pad_0048[0x8]; // offset 0x48
};
