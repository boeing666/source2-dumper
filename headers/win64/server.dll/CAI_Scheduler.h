#pragma once

class CAI_Scheduler : public CAI_Component /*0x0*/  // sizeof 0xC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    AIScheduleState_t m_ScheduleState; // offset 0x48, size 0x18, align 4
    char _pad_0060[0x8]; // offset 0x60
    ScheduleId_t m_failSchedule; // offset 0x68, size 0x8, align 8 | MNotSaved
    ScheduleId_t m_translatedSchedule; // offset 0x70, size 0x8, align 8 | MNotSaved
    ScheduleId_t m_untranslatedSchedule; // offset 0x78, size 0x8, align 8 | MNotSaved
    char _pad_0080[0x38]; // offset 0x80
    CUtlString m_sInterruptText; // offset 0xB8, size 0x8, align 8 | MNotSaved
    char _pad_00C0[0x8]; // offset 0xC0
};
