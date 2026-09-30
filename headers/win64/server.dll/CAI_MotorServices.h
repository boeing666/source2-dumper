#pragma once

class CAI_MotorServices : public CAI_Component /*0x0*/  // sizeof 0x1D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CUtlVector< CAI_MotorServices::MotorRegistration_t > m_vecMotors; // offset 0x68, size 0x18, align 8
    int32 m_nActiveMotorIndex; // offset 0x80, size 0x4, align 4
    Vector m_vMotorVelocity; // offset 0x84, size 0xC, align 4
    char _pad_0090[0x30]; // offset 0x90
    CGlobalSymbol[5] m_pMovementGaitSetRequests; // offset 0xC0, size 0x28, align 8
    CAI_MotorServices::MovementGaitRequest_t[7] m_pMovementGaitRequests; // offset 0xE8, size 0x70, align 4
    CAI_MotorServices::StanceRequest_t[6] m_pStanceRequests; // offset 0x158, size 0x48, align 4
    bool[3] m_allowedStances; // offset 0x1A0, size 0x3, align 1
    char _pad_01A3[0x1]; // offset 0x1A3
    StanceType_t m_nCurrentStance; // offset 0x1A4, size 0x4, align 4
    CGlobalSymbol m_sSharedPoseSlotID; // offset 0x1A8, size 0x8, align 8 | MNotSaved
    CNetworkUtlVectorBase< CTransform > m_vecSharedPoseParentSpace; // offset 0x1B0, size 0x18, align 8 | MNotSaved
    CAI_MotorServices::CAI_NullMotor m_nullMotor; // offset 0x1C8, size 0x10, align 255
};
