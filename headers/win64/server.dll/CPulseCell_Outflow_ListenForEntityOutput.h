#pragma once

class CPulseCell_Outflow_ListenForEntityOutput : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0xF0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MPulseEditorSubHeaderText MPulseEditorHeaderIcon}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    SignatureOutflow_Resume m_OnFired; // offset 0x48, size 0x48, align 255
    CPulse_ResumePoint m_OnCanceled; // offset 0x90, size 0x48, align 255
    CGlobalSymbol m_strEntityOutput; // offset 0xD8, size 0x8, align 8
    CUtlString m_strEntityOutputParam; // offset 0xE0, size 0x8, align 8 | MPropertyDescription
    bool m_bListenUntilCanceled; // offset 0xE8, size 0x1, align 1 | MPropertyDescription
    char _pad_00E9[0x7]; // offset 0xE9
};
