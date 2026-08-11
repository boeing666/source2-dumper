#pragma once

class CPulseCell_WaitForCursorsWithTag : public CPulseCell_WaitForCursorsWithTagBase /*0x0*/  // sizeof 0x130, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MPulseEditorHeaderIcon}
{
public:
    char _pad_0000[0x128]; // offset 0x0
    bool m_bTagSelfWhenComplete; // offset 0x128, size 0x1, align 1 | MPropertyDescription
    char _pad_0129[0x3]; // offset 0x129
    PulseCursorCancelPriority_t m_nDesiredKillPriority; // offset 0x12C, size 0x4, align 4 | MPropertyDescription
};
