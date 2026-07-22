#pragma once

class CPulseCell_Outflow_ListenForEntityOutput : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x138, align 0x8 [vtable] (server) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MPulseEditorSubHeaderText MPulseEditorHeaderIcon}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    SignatureOutflow_Resume m_OnFired; // offset 0xD8, size 0x48, align 255
    CGlobalSymbol m_strEntityOutput; // offset 0x120, size 0x8, align 8
    CUtlString m_strEntityOutputParam; // offset 0x128, size 0x8, align 8 | MPropertyDescription
    bool m_bListenUntilCanceled; // offset 0x130, size 0x1, align 1 | MPropertyDescription
    char _pad_0131[0x7]; // offset 0x131
};
