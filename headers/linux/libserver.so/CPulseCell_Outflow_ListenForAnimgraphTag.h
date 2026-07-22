#pragma once

class CPulseCell_Outflow_ListenForAnimgraphTag : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x170, align 0x8 [vtable] (server) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MPulseEditorSubHeaderText}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    CPulse_ResumePoint m_OnStart; // offset 0xD8, size 0x48, align 255
    CPulse_ResumePoint m_OnEnd; // offset 0x120, size 0x48, align 255
    CGlobalSymbol m_TagName; // offset 0x168, size 0x8, align 8 | MPropertyAttributeEditor
};
