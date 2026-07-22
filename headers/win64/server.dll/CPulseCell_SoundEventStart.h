#pragma once

class CPulseCell_SoundEventStart : public CPulseCell_BaseFlow /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (server) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    SoundEventStartType_t m_Type; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
