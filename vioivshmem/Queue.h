EXTERN_C_START

typedef struct _QUEUE_CONTEXT
{

    ULONG PrivateDeviceData;  // just a placeholder

} QUEUE_CONTEXT, *PQUEUE_CONTEXT;

WDF_DECLARE_CONTEXT_TYPE_WITH_NAME(QUEUE_CONTEXT, QueueGetContext)

NTSTATUS VIOIVSHMEMQueueInitialize(_In_ WDFDEVICE Device);

EVT_WDF_IO_QUEUE_IO_DEVICE_CONTROL VIOIVSHMEMEvtIoDeviceControl;
EVT_WDF_IO_QUEUE_IO_STOP           VIOIVSHMEMEvtIoStop;
EVT_WDF_FILE_CLEANUP               VIOIVSHMEMEvtDeviceFileCleanup;

EXTERN_C_END