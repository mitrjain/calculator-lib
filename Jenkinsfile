pipeline {
    agent {
        dockerfile {
            dir 'cross-compile'
        }
    }
    stages {
        stage('init') {
            steps{
                sh 'echo Hello'
                sh 'pwd'
                sh 'ls'
            }

        }
    }
}
