#pragma once

class CPulseCell_PlaySequence : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x140, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    CUtlString m_SequenceName; // offset 0xD8, size 0x8, align 8 | MPropertyAttributeSuggestionName
    PulseNodeDynamicOutflows_t m_PulseAnimEvents; // offset 0xE0, size 0x18, align 8
    CPulse_ResumePoint m_OnFinished; // offset 0xF8, size 0x48, align 255
};
