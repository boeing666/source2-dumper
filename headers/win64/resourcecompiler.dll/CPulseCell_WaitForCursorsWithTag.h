#pragma once

class CPulseCell_WaitForCursorsWithTag : public CPulseCell_WaitForCursorsWithTagBase /*0x0*/  // sizeof 0xA0, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MPulseEditorHeaderIcon}
{
public:
    char _pad_0000[0x98]; // offset 0x0
    bool m_bTagSelfWhenComplete; // offset 0x98, size 0x1, align 1 | MPropertyDescription
    char _pad_0099[0x3]; // offset 0x99
    PulseCursorCancelPriority_t m_nDesiredKillPriority; // offset 0x9C, size 0x4, align 4 | MPropertyDescription
};
