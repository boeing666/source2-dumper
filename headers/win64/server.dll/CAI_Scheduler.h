#pragma once

class CAI_Scheduler : public CAI_Component /*0x0*/  // sizeof 0xB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x50]; // offset 0x0
    AIScheduleState_t m_ScheduleState; // offset 0x50, size 0x14, align 255
    char _pad_0064[0xC]; // offset 0x64
    CUtlSymbolLarge m_failSchedule; // offset 0x70, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_translatedSchedule; // offset 0x78, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_untranslatedSchedule; // offset 0x80, size 0x8, align 8 | MNotSaved
    char _pad_0088[0x20]; // offset 0x88
    CUtlString m_sInterruptText; // offset 0xA8, size 0x8, align 8 | MNotSaved
};
