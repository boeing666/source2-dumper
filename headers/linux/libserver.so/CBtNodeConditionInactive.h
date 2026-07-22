#pragma once

class CBtNodeConditionInactive : public CBtNodeCondition /*0x0*/  // sizeof 0x98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x78]; // offset 0x0
    float32 m_flRoundStartThresholdSeconds; // offset 0x78, size 0x4, align 4
    float32 m_flSensorInactivityThresholdSeconds; // offset 0x7C, size 0x4, align 4
    CountdownTimer m_SensorInactivityTimer; // offset 0x80, size 0x18, align 8
};
