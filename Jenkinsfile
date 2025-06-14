pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                sh 'cmake -S . -B build'
                sh 'cmake --build build'
            }
        }
        stage('Test') {
            steps {
                sh './scripts/run_tests.sh'
            }
        }
        stage('Flash') {
            steps {
                sh './scripts/flash_firmware.sh'
            }
        }
    }
}
