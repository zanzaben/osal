/*
 *      Copyright (c) 2019, United States government as represented by the
 *      administrator of the National Aeronautics Space Administration.
 *      All rights reserved. This software was created at NASA Goddard
 *      Space Flight Center pursuant to government contracts.
 *
 *      This is governed by the NASA Open Source Agreement and may be used,
 *      distributed and modified only according to the terms of that agreement.
 */

/* OSAL coverage stub replacement for pthread.h */
#ifndef _OSAL_OVERRIDE_PTHREAD_H_
#define _OSAL_OVERRIDE_PTHREAD_H_

#include <OCS_pthread.h>
#include <sched.h>

/* ----------------------------------------- */
/* mappings for declarations in pthread.h */
/* ----------------------------------------- */

#define PTHREAD_PRIO_INHERIT            OCS_PTHREAD_PRIO_INHERIT
#define PTHREAD_MUTEX_RECURSIVE         OCS_PTHREAD_MUTEX_RECURSIVE
#define PTHREAD_EXPLICIT_SCHED          OCS_PTHREAD_EXPLICIT_SCHED

#define pthread_t                       OCS_pthread_t
#define pthread_attr_t                  OCS_pthread_attr_t
#define pthread_mutex_t                 OCS_pthread_mutex_t
#define pthread_mutexattr_t             OCS_pthread_mutexattr_t
#define pthread_cond_t                  OCS_pthread_cond_t
#define pthread_condattr_t              OCS_pthread_condattr_t
#define pthread_key_t                   OCS_pthread_key_t

#define pthread_attr_destroy            OCS_pthread_attr_destroy
#define pthread_attr_getschedparam      OCS_pthread_attr_getschedparam
#define pthread_attr_init               OCS_pthread_attr_init
#define pthread_attr_setinheritsched    OCS_pthread_attr_setinheritsched
#define pthread_attr_setschedparam      OCS_pthread_attr_setschedparam
#define pthread_attr_setschedpolicy     OCS_pthread_attr_setschedpolicy
#define pthread_attr_setstacksize       OCS_pthread_attr_setstacksize
#define pthread_cancel                  OCS_pthread_cancel
#define pthread_cond_broadcast          OCS_pthread_cond_broadcast
#define pthread_cond_destroy            OCS_pthread_cond_destroy
#define pthread_cond_init               OCS_pthread_cond_init
#define pthread_cond_signal             OCS_pthread_cond_signal
#define pthread_cond_timedwait          OCS_pthread_cond_timedwait
#define pthread_cond_wait               OCS_pthread_cond_wait
#define pthread_create                  OCS_pthread_create
#define pthread_detach                  OCS_pthread_detach
#define pthread_equal                   OCS_pthread_equal
#define pthread_exit                    OCS_pthread_exit
#define pthread_getschedparam           OCS_pthread_getschedparam
#define pthread_getspecific             OCS_pthread_getspecific
#define pthread_key_create              OCS_pthread_key_create
#define pthread_mutexattr_destroy       OCS_pthread_mutexattr_destroy
#define pthread_mutexattr_init          OCS_pthread_mutexattr_init
#define pthread_mutexattr_setprotocol   OCS_pthread_mutexattr_setprotocol
#define pthread_mutexattr_settype       OCS_pthread_mutexattr_settype
#define pthread_mutex_destroy           OCS_pthread_mutex_destroy
#define pthread_mutex_init              OCS_pthread_mutex_init
#define pthread_mutex_lock              OCS_pthread_mutex_lock
#define pthread_mutex_unlock            OCS_pthread_mutex_unlock
#define pthread_self                    OCS_pthread_self
#define pthread_setschedparam           OCS_pthread_setschedparam
#define pthread_setschedprio            OCS_pthread_setschedprio
#define pthread_setspecific             OCS_pthread_setspecific
#define pthread_sigmask                 OCS_pthread_sigmask



#endif /* _OSAL_OVERRIDE_PTHREAD_H_ */
