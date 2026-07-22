#pragma once

class CDOTA_Unit_Announcer : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x19E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x19B0]; // offset 0x0
    CAnnouncerDescriptor m_currentAnnouncer; // offset 0x19B0, size 0x28, align 255
    char _pad_19D8[0x8]; // offset 0x19D8
};
